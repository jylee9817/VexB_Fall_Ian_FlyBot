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

void fullFlyWheelIsTrue(bool fullFlyWheelOn, bool fullFlyWheelOff)//stores boolean data into the vraibel fly wheel on
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

void launchFullFlyWheel()//launches the ball with the full speed
{
		if(FlyWheelOn == true) //port 6U-Off and 6D-On
	{
		setFlyWheelMotor(127);
	}
	else if(FlyWheelOn == false)
	{
		setFlyWheelMotor(0);
	}
	else
	{
	 setFlyWheelMotor(0);
	}
}

void halfFlyWheelIsTrue(bool halfFlyWheelOn, bool halfFlyWheelOff) //stores boolean data into the vraibel fly wheel on
{
	if(halfFlyWheelOn == true)
	{
		HalfWheelOn = true;
	}
	else if(halfFlyWheelOn == true)
	{
		HalfWheelOn = false;
	}
	else
	{
	 HalfWheelOn = false;
	}
}

void launchHalfFlyWheel() //launches the ball with the half of the speed
{
		if(HalfWheelOn == true) //port 5U-Off and 5D-On
	{
		setFlyWheelMotor(64);
	}
	else if(HalfWheelOn == false)
	{
		setFlyWheelMotor(0);
	}
	else
	{
	 setFlyWheelMotor(0);
	}
}
