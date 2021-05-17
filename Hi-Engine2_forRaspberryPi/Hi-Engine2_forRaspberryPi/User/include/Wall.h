#pragma once

#include "../../Engine/include/Object.h"

class Wall : public Object {
private:

public:
	
	//WorldOutliner worldOutliner;
	Wall();

	Wall(FPosition p, std::string name, Area area, std::string Type);

	void Work() // ���� �ȿ��� ���ư��� Work
	;

	void Make();

	void OnCollision(Object* other);


	void Pause();

	~Wall();
};