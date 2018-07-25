#include "ball.h"

Ball::Ball()
	: m_shape{ 15.0f }, m_velocity{ sf::Vector2f(300.0f, -500.0f) }, m_isAttached{ true }
{
	m_shape.setFillColor(sf::Color::Magenta);
}

const sf::CircleShape& Ball::getShape() const
{
	return m_shape;
}

bool Ball::isAttached() const 
{ 
	return m_isAttached; 
}

void Ball::setAttached(bool val) 
{ 
	m_isAttached = val; 
}

float Ball::getRadius() const
{
	return m_shape.getRadius();
}

float Ball::getSize() const 
{ 
	return m_shape.getRadius() * 2;
}

const sf::Vector2f& Ball::getPosition() const
{
	return m_shape.getPosition();
}

void Ball::setPosition(float x, float y)
{
	m_shape.setPosition(sf::Vector2f(x, y));
}

const sf::Vector2f& Ball::getVelocity() const
{
	return m_velocity;
}

void Ball::setXVelocity(float val)
{
	m_velocity.x = val;
}

void Ball::setYVelocity(float val)
{
	m_velocity.y = val;
}
