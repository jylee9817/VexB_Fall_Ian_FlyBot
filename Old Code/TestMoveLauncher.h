void testMoveMotor(int speed)
{
	motor[LeftSideTop] = speed; //inverted
	motor[LeftSideBottom] = speed;
	motor[RightSideTop] = speed;
	motor[RightSideBottom] = speed; //inverted
}

void testShoot(int launcherY, float launcherX)
{
	if(abs(launcherY) > DEADZONE)
	{
		testMoveMotor(launcherY);
	}
	else if(abs(launcherX) > DEADZONE)
	{
		testMoveMotor(launcherX * 0.8);
	}
	else
	{
		testMoveMotor(0);
	}
}
