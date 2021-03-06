/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1_VIEW_BASE_HPP
#define SCREEN1_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/containers/progress_indicators/CircleProgress.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/RadioButton.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>
#include <touchgfx/mixins/ClickListener.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}

    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image image1;
    touchgfx::Button button1;
    touchgfx::ToggleButton toggleButton1;
    touchgfx::CircleProgress circleProgress1;
    touchgfx::PainterRGB565 circleProgress1Painter;
    touchgfx::Slider slider1;
    touchgfx::ClickListener< touchgfx::CircleProgress > circleProgress2;
    touchgfx::PainterRGB565 circleProgress2Painter;
    touchgfx::CircleProgress circleProgress3;
    touchgfx::PainterRGB565 circleProgress3Painter;
    touchgfx::Slider slider2;
    touchgfx::RadioButton radioButton1;
    touchgfx::RadioButtonGroup<1> radioButtonGroup;

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void radioButtonSelectedCallbackHandler(const touchgfx::AbstractButton& src);
    void radioButtonDeselectedCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButton&> radioButtonSelectedCallback;
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButton&> radioButtonDeselectedCallback;

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // SCREEN1_VIEW_BASE_HPP
