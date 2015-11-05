//Fly Wheel

void fullFlyWheel(bool on)
{
	if(on == true)
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

void halfFlyWheel(bool on)
{
	if(on == true)
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
