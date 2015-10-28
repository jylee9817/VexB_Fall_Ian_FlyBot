//Setting motors to spin in same rate(speed)
void setFlyWheelMotor(int speed)
{

	motor[LeftSideTop] = speed; //inverted
	motor[LeftSideBottom] = speed;
	motor[RightSideTop] = speed;
	motor[RightSideBottom] = speed; //inverted

}

void launchFullFlyWheel(bool fullFlyWheelOn, bool fullFlyWheelOff) //launches the ball with the full speed
{
	if(fullFlyWheelOn == true) //port 6U-Off and 6D-On
	{
		setFlyWheelMotor(127);
	}
	else if (fullFlyWheelOff == true)
	{
		setFlyWheelMotor(0);
	}
	else
	{
	 setFlyWheelMotor(0);
	}
}

void launchHalfFlyWheel(bool halfFlyWheelOn, bool halfFlyWheelOff) //launches the ball with the half of the speed
{
	if(halfFlyWheelOn == true) //port 5U-Off and 5D-On
	{
		setFlyWheelMotor(64);
	}
	else if (halfFlyWheelOff == true)
	{
		setFlyWheelMotor(0);
	}
	else
	{
	 setFlyWheelMotor(0);
	}
}
