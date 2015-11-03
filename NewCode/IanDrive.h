int DEADZONE = 15;
int turn = 0;
int straight = 0;

void setForwardValue(int driveY)
{
	if(driveY > DEADZONE || driveY < -DEADZONE)
	{
		straight = driveY;
	}
	else
	{
		straight = 0;
	}
}

void setTurnValue(int driveX)
{
	if(driveX > DEADZONE || driveX < -DEADZONE)
	{
		turn = driveX;
	}
	else
	{
		turn = 0;
	}
}

void setMotorValue()
{
	motor[leftDriveMotor] = straight + turn;
	motor[rightDriveMotor] = straight - turn;
}

void drive()
{
	setMotorValue();
}
