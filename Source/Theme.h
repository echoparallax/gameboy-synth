/*
  ==============================================================================

    Theme.h
    Created: 27 Feb 2021 11:38:27pm
    Author:  Charles Julian Knight

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

static const int KeyboardHeight = 64;
static const int WindowWidth = 800;
static const int WindowHeight = 600;
static const int OscBoxWidth = WindowWidth / 2;
static const int OscBoxHeight = (WindowHeight - KeyboardHeight) / 2;
// Distance to move child components inwards so they don't overlap the outlines
static const int OutlineMargin = 5;
// Height proportion that the basic controls get
static const double BasicControlHeightProportion = 0.3;

enum GameBoyColorIds {
    OscOutlineColorId,
    OscLabelColorId,
};

inline void theme(juce::LookAndFeel& lookAndFeel)
{
    lookAndFeel.setColour(GameBoyColorIds::OscOutlineColorId, juce::Colours::black);
    lookAndFeel.setColour(GameBoyColorIds::OscLabelColorId, juce::Colours::white);
}
