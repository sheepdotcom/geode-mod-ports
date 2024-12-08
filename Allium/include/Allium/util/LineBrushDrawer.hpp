#pragma once

#include "BrushDrawer.hpp"

namespace allium {
    class LineBrushDrawer : public BrushDrawer {
    protected:
        cocos2d::CCPoint m_firstPoint = ccp(0, 0);
        cocos2d::CCPoint m_lastPoint = ccp(0, 0);
    public:
        static LineBrushDrawer* create();
        bool init() override;

        bool handleTouchStart(cocos2d::CCPoint const& point) override;
        void handleTouchMove(cocos2d::CCPoint const& point) override;
        void handleTouchEnd(cocos2d::CCPoint const& point) override;

        void updateOverlay() override;

        void updateLine() override;

        PolylineConverter initializeConverter() override;
    };
}