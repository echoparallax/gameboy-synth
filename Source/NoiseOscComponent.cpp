/*
  ==============================================================================

    NoiseOscComponent.cpp
    Created: 13 Mar 2021 2:09:59pm
    Author:  Charles Julian Knight

  ==============================================================================
*/

#include <JuceHeader.h>
#include "NoiseOscComponent.h"
#include "Theme.h"

//==============================================================================
NoiseOscComponent::NoiseOscComponent() : controls(3)
{
    addAndMakeVisible(controls);
}

NoiseOscComponent::~NoiseOscComponent() {}

void NoiseOscComponent::paint(juce::Graphics& g)
{
    // Outline
    g.setColour(getLookAndFeel().findColour(OscOutlineColorId));
    g.drawRect(getLocalBounds());

    // Oscillator label
    g.setColour(getLookAndFeel().findColour(OscLabelColorId));
    g.drawText("Noise", getLocalBounds().reduced(OutlineMargin), juce::Justification::topRight);
}

void NoiseOscComponent::resized()
{
    const juce::Rectangle<int> inner = getLocalBounds().reduced(OutlineMargin);
    controls.setBounds(inner.withHeight(inner.proportionOfHeight(BasicControlHeightProportion)));
}
