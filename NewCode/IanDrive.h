//Initializing the variables
int DEADZONE = 15;
int turn = 0;
int straight = 0;

//Sets Forward and Turn Value to assign motor value
//Sets forward value to driveY if drive Y is bigger then Deadzone or smaller then negative Deazone
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

//Sets turn value to drive X if dirve X is bidgger then Deadzone or smaller then negative Deazone
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

//Sets the motor value
void drive()
{
	motor[leftDriveMotor] = straight + turn;
	motor[rightDriveMotor] = straight - turn;
}
//When turn value is greater(goint to right: +) the motor goes faster than right, turning the robot to right
