#pragma once

#include <stdio.h>
#include <axmol.h>
#include <ui/CocosGUI.h>
#include <string>
#include <vector>
#include <functional>

using namespace ax;

#define DEFAULT_LISTVIEW_HEIGHT 0.85f
#define DEFAULT_ITEM_MARGIN 30

class ScrollableMenu : public ax::Node
{
public:
    virtual bool init();
    CREATE_FUNC(ScrollableMenu);
    void setTitle(std::string text, int fontSize = 80, Color3B color = Color3B::YELLOW);
    
    template <class ScenaType>
    void addMenuEntry(std::string desc, int fontSize = 65, Color3B color = Color3B::WHITE)
    {
        using namespace ax::ui;
        
        auto text = Text::create(desc.c_str(), "fonts/Marker Felt.ttf", fontSize);
        text->setTextHorizontalAlignment(TextHAlignment::CENTER);
        text->setTouchEnabled(true);
        text->setColor(color);
        listView->pushBackCustomItem(text);
        
        auto loadScene = []{
            auto scene = ScenaType::createScene();
            Director::getInstance()->pushScene(scene);
        };
        
        lambdas.push_back(loadScene);
    }
    
private:
    void createListView();
    void selectedItem(ax::Ref *s, ui::ListView::EventType type);
    
    ui::ListView* listView {nullptr};
    ax::Size visibleSize;
    std::vector<std::function<void()>> lambdas;
};