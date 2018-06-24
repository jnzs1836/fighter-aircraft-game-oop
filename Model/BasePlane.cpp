#include"BasePlane.h"


void BasePlane::keyPressEvent(QKeyEvent *event)  
{  
    switch (event->key()) {  
    case Qt::Key_Up:  
        event->accept();  
        MoveUp();
        Up = true;  
        break;  
    case Qt::Key_Down:
   		MoveDown();  
        event->accept();  
        Down = true;  
        break;  
    case Qt::Key_Left:
    	MoveLeft();  
        event->accept();  
        Left = true;  
        break;  
    case Qt::Key_Right:
    	MoveRight();  
        event->accept();  
        Right = true;  
        break;  
    case Qt::Key_Space:
    	Shoot();  
        event->accept();  
        bomb = true;  
        break;  
    default:  
        event->ignore();  
        break;  
    }  
}  


void PlayerPlane::keyReleaseEvent(QKeyEvent *event) {  
    switch (event->key()) {  
    case Qt::Key_Up:  
        event->accept();  
        Up = false;  
        break;  
    case Qt::Key_Down:  
        event->accept();  
        Down = false;  
        break;  
    case Qt::Key_Left:  
        event->accept();  
        Left = false;  
        break;  
    case Qt::Key_Right:  
        event->accept();  
        Right = false;  
        break;  
    case Qt::Key_Space:  
        event->accept();  
        bomb = false;  
        break;  
    default:  
        event->ignore();  
        break;  
    }  
}  

void BasePlane::MoveUp(){
	if(y>1000)
		return;
	else 
		y+=10;
}

void BasePlane::MoveDown(){
	if(y<0)
		return;
	else 
		y-=10;
}
void BasePlane::MoveRight(){
	if(x>1000)
		return;
	else 
		x+=10; 
}
void BasePlane::MoveLeft(){
	if(x<1000)
		return;
	else
		x-=10;
}

void BasePlane::getDefense(){
	defense += 10;
}

void BasePlane::attacked(){
	if(defense == 0){
		hp-=10;
	}	
	if(hp<=0){
		breakdown();
	}		
}

void BasePlane::setSpeed(value){
	speed = 10;
}

float BasePlane::getSpeed(int increasement){
	speed += increasement;
}

void BasePlane::setHp(value){
	hp = 100;
}

float BasePlane::getHp(int blood){
	hp += blood;
}

void BasePlane::addWeapon(int bulletId);

void BasePlane::fire(int bulletId);

void BasePlane::breakdown(){
	//飞机消失
}

