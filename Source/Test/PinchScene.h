#pragma once

#include "axmol.h"
using namespace ax;

#include <ui/CocosGUI.h>
using namespace ax::ui;

// Gestures
#include "Gestures/GestureRecognizer.h"
#include "Gestures/PinchGestureRecognizer.h"
#include "Gestures/TapGestureRecognizer.h"
#include "Gestures/SwipeGestureRecognizer.h"
#include "Gestures/LongPressGestureRecognizer.h"
#include "Gestures/PanGestureRecognizer.h"

#include <string>
using namespace std;

#define PINCH_RECONIZER_NAME "pinch recognizer"

class PinchScene : public LayerColor
{
public:
    static ax::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(PinchScene);
    
private:
    void addSprite();
    void addGestureRecognizers();
    void addLabel();
    void addDebugButton();
    
    // callbacks
    void onPinch (PinchGestureRecognizer* recognizer);
    void onTap(TapGestureRecognizer* recognizer);
    void goBack(Ref* sender, Widget::TouchEventType type);
    void onDebugPressed(Ref* sender, Widget::TouchEventType type);
    
    Label* label {nullptr};
    Size visibleSize;
    Sprite* sprite {nullptr};
    Button* debugButton {nullptr};
};