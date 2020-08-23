#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <list>
#include <iterator>
#include "GraphNode.h"
#include <queue>

class Graph : sf::Drawable {

public:

	Graph();
	~Graph();

	void add(GraphNode* node);
	void remove(int adjacency_list_index);
	bool remove(GraphNode* node);
    GraphNode* click(sf::Vector2f position);

    std::vector <GraphNode*> pathfind(GraphNode* start, GraphNode* finish);

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const {};

	void init();
private:


	std::list<GraphNode*> adjacency_list;

};




 

