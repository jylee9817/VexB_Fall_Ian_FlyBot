//Variables
bool FlyWheelOn = false;
bool HalfWheelOn = false;

//Setting motors to spin in same rate(speed)
void setFlyWheelMotor(int speed)
{

	motor[LeftSideTop] = speed;
	motor[LeftSideBottom] = speed; //inverted
	motor[RightSideTop] = speed; //inverted
	motor[RightSideBottom] = speed;

}

void fullFlyWheelIsTrue(bool fullFlyWheelOn, bool fullFlyWheelOff)//stores boolean data into the variable fly wheel on
{
	if(fullFlyWheelOn == true) //port 6U-Off and 6D-On
	{
		FlyWheelOn = true;
		HalfWheelOn = false;
	}
	else if (fullFlyWheelOff == true)
	{
		FlyWheelOn = false;
	}
	else
	{
		return;
	}
}

void launchFullFlyWheel()//launches the ball with the full speed
{
		if(FlyWheelOn == true)
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

void halfFlyWheelIsTrue(bool halfFlyWheelOn, bool halfFlyWheelOff) //stores boolean data into the variable fly wheel on
{
	if(halfFlyWheelOn == true)
	{
		HalfWheelOn = true;
		FlyWheelOn = false;
	}
	else if(halfFlyWheelOn == true)
	{
		HalfWheelOn = false;
	}
	else
	{
	 return;
	}
}

void launchHalfFlyWheel() //launches the ball with the half of the speed
{
		if(HalfWheelOn == true) //port 5U-Off and 5D-On
	{
		setFlyWheelMotor(95);
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
