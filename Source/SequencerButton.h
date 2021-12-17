/*
  ==============================================================================

    SequencerButton.h
    Created: 17 Dec 2021 11:48:51am
    Author:  Olexander Koziaruk

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

using namespace juce;

class SequencerButton  : public Button
{
public:
    //==============================================================================
    SequencerButton();
    ~SequencerButton() override;

    //==============================================================================
    void paintButton (Graphics&, bool, bool) override;
    void colourChanged() override;
    void buttonStateChanged() override;
private:
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SequencerButton)

};
