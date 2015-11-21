void flyWheelLauncher()
{
	if(vexRT[Btn5U] == 1)
	{
		motor[leftTopLauncher] = 127; //was 110
		motor[leftBottomLauncher] = 127; //higher the value, faster the motor, further the launch distance
		motor[rightTopLauncher] = 127;
		motor[rightBottomLauncher] = 127;
		motor[middleRightLauncher] = 127;
		motor[middleLeftLauncher] = 127;
	}
	else if(vexRT[Btn5D] == 1)
	{
		motor[leftTopLauncher] = 0;
		motor[leftBottomLauncher] = 0;
		motor[rightTopLauncher] = 0;
		motor[rightBottomLauncher] = 0;
		motor[middleRightLauncher] = 0;
		motor[middleLeftLauncher] = 0;
	}
		else if(vexRT[Btn6U] == 1)
	{
		motor[leftTopLauncher] = 75;
		motor[leftBottomLauncher] = 75;
		motor[rightTopLauncher] = 75;
		motor[rightBottomLauncher] = 75;
		motor[middleRightLauncher] = 75;
		motor[middleLeftLauncher] = 75;
	}
		else if(vexRT[Btn6D] == 1)
	{
		motor[leftTopLauncher] = 0;
		motor[leftBottomLauncher] = 0;
		motor[rightTopLauncher] = 0;
		motor[rightBottomLauncher] = 0;
		motor[middleRightLauncher] = 0;
		motor[middleLeftLauncher] = 0;
	}
}
