//Fly Wheel Launcher
//Has a problem in which only half speed launcher works with full speed

//Initializing the boolean so hat the launcher will not move without input
bool fullWheelOn = false; //when this boolean is true the launcher go full speed
bool halfWheelOn = false; //when this boolean is true the launcher go half speed

//Sets fullWheelOn as true (moves in full speed)
//This function stores Boolean value into a varibale -> full wheel on and half wheel on
void setFullFlyWheel(bool on)
{
	if(on == true)//if the parameter is ture
	{
		fullWheelOn = true; //set full wheel on as true
		halfWheelOn = false; //This will prevent code colision by making one function turn off when other is on
	}
	/*else
	{
		return; //returns nothing because the fucniton does not have any return type
	}*/
}

//set halfWheelOn as true (moves in half speed)
void setHalfFlyWheel(bool on)
{
	if(on == true)
	{
		halfWheelOn = true;
		fullWheelOn = false;
	}
}


//set fullWheelOn as false (launcher stops moving)
void setFullFlyWheelOff(bool off)
{
	if(off == true)
	{
		fullWheelOn = false;
	}
	/*else
	{
		return;
	}*/
}
//set halfWheelOn as false (launcher stops moving)
void setHalfFlyWheelOff(bool off)
{
	if(off == true)
	{
		halfWheelOn = false;
	}
}


//launches the ball with full speed
void fullFlyWheel()
{
	if(fullWheelOn == true) //when fullWheelOn boolean is true(when it is moving)
	{
		motor[leftTopLauncher] = 127; //was 110
		motor[leftBottomLauncher] = 127; //higher the value, faster the motor, further the launch distance
		motor[rightTopLauncher] = 127;
		motor[rightBottomLauncher] = 127;
	}
	else if (fullWheelOn == false)//when fullWheelOn boolean is true(when it is not moving)
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
	if(halfWheelOn == true) //when halfWheelOn boolean is true(when it is moving)
	{
		motor[leftTopLauncher] = 100; //was 75
		motor[leftBottomLauncher] = 100;
		motor[rightTopLauncher] = 100;
		motor[rightBottomLauncher] = 100;
	}
	else if(halfWheelOn == false)//when halfWheelOn boolean is false(when it is not moving)
	{
		motor[leftTopLauncher] = 0;
		motor[leftBottomLauncher] = 0;
		motor[rightTopLauncher] = 0;
		motor[rightBottomLauncher] = 0;
	}
	/*else
	{
		return;
	}*/
}
