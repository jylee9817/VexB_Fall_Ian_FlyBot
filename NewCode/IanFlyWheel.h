//Fly Wheel

void fullFlyWheel(bool on)
{
	if(on == true)
	{
		motor[leftTopLauncher] = 120;
		motor[leftBottomLauncher] = 120;
		motor[rightTopLauncher] = 120;
		motor[rightBottomLauncher] = 120;
	}
	else
	{
		motor[leftTopLauncher] = 0;
		motor[leftBottomLauncher] = 0;
		motor[rightTopLauncher] = 0;
		motor[rightBottomLauncher] = 0;
	}
}

void halfFlyWheel(bool on)
{
	if(on == true)
	{
		motor[leftTopLauncher] = 90;
		motor[leftBottomLauncher] = 90;
		motor[rightTopLauncher] = 90;
		motor[rightBottomLauncher] = 90;
	}
	else
	{
		motor[leftTopLauncher] = 0;
		motor[leftBottomLauncher] = 0;
		motor[rightTopLauncher] = 0;
		motor[rightBottomLauncher] = 0;
	}
}
