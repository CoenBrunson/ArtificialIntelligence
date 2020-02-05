#include "Obstacle.h"
#include "Game.h"

Obstacle::Obstacle()
{
	TheTextureManager::Instance()->load("../Assets/textures/Obstacle.png",
		"Obstacle", TheGame::Instance()->getRenderer());
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Obstacle");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(500.0f, 300.0f));
	setIsColliding(false);
	setType(GameObjectType::OBSTACLE);
	TheTextureManager::Instance()->setAlpha("Obstacle", 128);

	TheSoundManager::Instance()->load("../Assets/audio/thunder.ogg",
		"thunder", sound_type::SOUND_SFX);
}

Obstacle::~Obstacle()
{
}

void Obstacle::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	TheTextureManager::Instance()->draw("Obstacle", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), true);
}

void Obstacle::update()
{

}

void Obstacle::clean()
{

}
