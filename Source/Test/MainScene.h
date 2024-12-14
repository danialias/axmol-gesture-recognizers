#pragma once

#include <axmol.h>
#include <ui/CocosGUI.h>

using namespace ax;
using namespace ax::ui;

class MainScene : public ax::Layer
{
public:
    static ax::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(MainScene);
    
private:
    Size visibleSize {Director::getInstance()->getVisibleSize()};
};

