/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  27 Jul 2011 2:09:45pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_WIDGETBOX_WIDGETBOX_9219741B__
#define __JUCER_HEADER_WIDGETBOX_WIDGETBOX_9219741B__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "lookandfeel/LookAndFeelCustom.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class widgetBox  : public Component,
                   public ComboBoxListener,
                   public SliderListener,
                   public ButtonListener
{
public:
    //==============================================================================
    widgetBox ();
    ~widgetBox();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void buttonClicked (Button* buttonThatWasClicked);



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	OldSchoolLookAndFeel oldLookAndFeel;
    LookAndFeelCustom customLookAndFeel;
    //[/UserVariables]

    //==============================================================================
    GroupComponent* groupComponent;
    ComboBox* comboBox;
    Slider* horizontalSlider;
    Slider* rotarySlider;
    ToggleButton* toggleButton;
    TextButton* textButton;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    widgetBox (const widgetBox&);
    const widgetBox& operator= (const widgetBox&);
};


#endif   // __JUCER_HEADER_WIDGETBOX_WIDGETBOX_9219741B__
