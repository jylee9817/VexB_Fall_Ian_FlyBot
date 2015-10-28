//Variables
bool FlyWheelOn = false;
bool HalfWheelOn = false;

//Setting motors to spin in same rate(speed)
void setFlyWheelMotor(int speed)
{

	motor[LeftSideTop] = speed; //inverted
	motor[LeftSideBottom] = speed;
	motor[RightSideTop] = speed;
	motor[RightSideBottom] = speed; //inverted

}

void fullFlyWheelIsTrue(bool fullFlyWheelOn, bool fullFlyWheelOff) //launches the ball with the full speed
{
	if(fullFlyWheelOn == true) //port 6U-Off and 6D-On
	{
		FlyWheelOn = true;
	}
	else if (fullFlyWheelOff == true)
	{
		FlyWheelOn = false;
	}
	else
	{
		FlyWheelOn = false;
	}
}

void launchFullFlyWheel()
{
		if(FlyWheelOn == true) //port 6U-Off and 6D-On
	{
		setFlyWheelMotor(127);
	}
	else if (FlyWheelOff == false)
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
	if(HalfWheelOn == true)
	{
		HalfWheelOn = true);
	}
	else if (HalfWheelOff == true)
	{
		HalfWheelOn = false;
	}
	else
	{
	 HalfWheelOn = false;
	}
}

void launchFullFlyWheel()
{
		if(HalfWheelOn == true) //port 5U-Off and 5D-On
	{
		setFlyWheelMotor(64);
	}
	else if (HalfWheelOff == false)
	{
		setFlyWheelMotor(0);
	}
	else
	{
	 setFlyWheelMotor(0);
	}
}
