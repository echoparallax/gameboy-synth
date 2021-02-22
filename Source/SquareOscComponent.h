/*
  ==============================================================================

    SquareOscComponent.h
    Created: 21 Feb 2021 5:09:02pm
    Author:  Charles Julian Knight

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class SquareOscComponent  : public juce::Component
{
public:
    SquareOscComponent();
    ~SquareOscComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::ToggleButton enableButton;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SquareOscComponent)
};