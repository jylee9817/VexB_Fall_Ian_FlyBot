//Fly Wheel that turns on and off with four button
bool fullWheelOn = false;
bool halfWheelOn = false;

//set boolean as true
void setFullFlyWheel(bool on)
{
	if(on == true)
	{
		fullWheelOn = true;
		halfWheelOn = false;
	}
	else
	{
		return;
	}
}
//set boolean as true
void setHalfFlyWheel(bool on)
{
	if(on == true)
	{
		halfWheelOn = true;
		fullWheelOn = false;
	}
	else
	{
		return;
	}
}

//set boolean as false
void setFullFlyWheelOff(bool off)
{
	if(off == true)
	{
		fullWheelOn = false;
	}
	else
	{
		return;
	}
}
//set boolean as false
void setHalfFlyWheel(bool off)
{
	if(off == true)
	{
		halfWheelOn = false;
	}
	else
	{
		return;
	}
}
//launches the ball with full speed
void fullFlyWheel()
{
	if(fullWheelOn == true)
	{
		motor[leftTopLauncher] = 127;
		motor[leftBottomLauncher] = 127;
		motor[rightTopLauncher] = 127;
		motor[rightBottomLauncher] = 127;
	}
	else
	{
		motor[leftTopLauncher] = 0;
		motor[leftBottomLauncher] = 0;
		motor[rightTopLauncher] = 0;
		motor[rightBottomLauncher] = 0;
	}
}
//launches ball with the half of the speed
void halfFlyWheel()
{
	if(halfWheelOn == true)
	{
		motor[leftTopLauncher] = 95;
		motor[leftBottomLauncher] = 95;
		motor[rightTopLauncher] = 95;
		motor[rightBottomLauncher] = 95;
	}
	else
	{
		motor[leftTopLauncher] = 0;
		motor[leftBottomLauncher] = 0;
		motor[rightTopLauncher] = 0;
		motor[rightBottomLauncher] = 0;
	}
}
