#include "FireCommand.h"

constexpr auto totaltime = 1;
constexpr auto switchtime = .1;

CatapultFireCommand::CatapultFireCommand()
{
    // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    Requires(catapultsubsystem);
}

// Called just before this Command runs the first time
void CatapultFireCommand::Initialize()
{
    SetInterruptible(false);
}

// Called repeatedly when this Command is scheduled to run
void CatapultFireCommand::Execute()
{
    catapultsubsystem->Set(CatapultSubsystem::little,Relay::kReverse);
}

// Make this return true when this Command no longer needs to run execute()
bool CatapultFireCommand::IsFinished()
{
    return TimeSinceInitialized()>=totaltime;
}

// Called once after isFinished returns true
void CatapultFireCommand::End()
{
    catapultsubsystem->Set(CatapultSubsystem::little,Relay::kForward);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CatapultFireCommand::Interrupted()
{
}
