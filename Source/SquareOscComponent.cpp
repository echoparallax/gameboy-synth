/*
  ==============================================================================

    SquareOscComponent.cpp
    Created: 21 Feb 2021 5:09:02pm
    Author:  Charles Julian Knight

  ==============================================================================
*/

#include <JuceHeader.h>
#include "SquareOscComponent.h"
#include "Theme.h"



//==============================================================================
SquareOscComponent::SquareOscComponent(OSCID id) : controls(id)
{
    addAndMakeVisible(controls);
    // +1 so that OSC0 displays as "Square 1"
    labelText = "Square " + std::to_string(id + 1);
}

SquareOscComponent::~SquareOscComponent() {}

void SquareOscComponent::paint(juce::Graphics& g)
{
    // Outline
    g.setColour(getLookAndFeel().findColour(OscOutlineColorId));
    g.drawRect(getLocalBounds());

    // Oscillator label
    g.setColour(getLookAndFeel().findColour(OscLabelColorId));
	g.drawText(labelText.c_str(), getLocalBounds().reduced(OutlineMargin), juce::Justification::topRight);
}

void SquareOscComponent::resized()
{
	const juce::Rectangle<int> inner = getLocalBounds().reduced(OutlineMargin);
	controls.setBounds(inner.withHeight(inner.proportionOfHeight(BasicControlHeightProportion)));
}
