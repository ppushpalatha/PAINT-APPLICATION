
#pragma once

#include "cmd.h"

#include<stack>

#include "shape.h"

#include<iostream>

using namespace std;

class commandmanager

{

public:

	shape* shapes;

	void invoke(cmd* obj);

	stack<cmd*> undostack;

	stack<cmd*> redostack;

	void undo();

	void redo();



};