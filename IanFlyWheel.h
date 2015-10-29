bool isFullSpeed = false;
bool isHalfSpeed = false;

void setFlyWheelMotor(int speed)
{
	motor[leftBottomLauncher] = speed;
	motor[leftTopLauncher] = speed;
	motor[rightBottomLauncher] = speed;
	motor[rightTopLauncher] = speed;
}

void fullFlyWheel(bool on, bool off)
{
	if(on)
	{
		isFullSpeed = true;
	}
	else if (off)
	{
		isFullSpeed = false
	}
	else
	{
		return;
	}
}

void halfFlyWheel(bool on, bool off)
{
	if(on)
	{
		isHalfSpeed = true;
	}
	else if(off)
	{
		isHalfSpeed = false
	}
	else
	{
		return;
	}
}

void launchFullSpeed()
{
	if(isFullSpeed == true)
	{
		setFlyWheelMotor(127);
	}
	else if(isFullSpeed == false)
	{
		setFlyWheelMotor(0);
	}
	else
	{
		setFlyWheelMotor(0);
	}
}

void launchHalfSpeed()
{
	if(isHalfSpeed == true)
	{
		setFlyWheelMotor(95);
	}
	else if(isHalfSpeed == false)
	{
		setFlyWheelMotor(0);
	}
	else
	{
		setFlyWheelMotor(0);
	}
}
