/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  6 Jun 2011 8:32:58pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "widgetBox.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
widgetBox::widgetBox ()
    : groupComponent (0),
      comboBox (0),
      horizontalSlider (0),
      rotarySlider (0),
      toggleButton (0),
      textButton (0)
{
    addAndMakeVisible (groupComponent = new GroupComponent (T("new group"),
                                                            T("group")));

    addAndMakeVisible (comboBox = new ComboBox (T("new combo box")));
    comboBox->setEditableText (false);
    comboBox->setJustificationType (Justification::centredLeft);
    comboBox->setTextWhenNothingSelected (String::empty);
    comboBox->setTextWhenNoChoicesAvailable (T("(no choices)"));
    comboBox->addItem (T("Default"), 1);
    comboBox->addItem (T("Old"), 2);
    comboBox->addItem (T("Custom"), 3);
    comboBox->addListener (this);

    addAndMakeVisible (horizontalSlider = new Slider (T("new slider")));
    horizontalSlider->setRange (0, 10, 0);
    horizontalSlider->setSliderStyle (Slider::LinearHorizontal);
    horizontalSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    horizontalSlider->addListener (this);

    addAndMakeVisible (rotarySlider = new Slider (T("new slider")));
    rotarySlider->setRange (0, 10, 0);
    rotarySlider->setSliderStyle (Slider::Rotary);
    rotarySlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    rotarySlider->addListener (this);

    addAndMakeVisible (toggleButton = new ToggleButton (T("new toggle button")));
    toggleButton->addButtonListener (this);

    addAndMakeVisible (textButton = new TextButton (T("new button")));
    textButton->addButtonListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);

    //[Constructor] You can add your own custom stuff here..

    //[/Constructor]
}

widgetBox::~widgetBox()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (groupComponent);
    deleteAndZero (comboBox);
    deleteAndZero (horizontalSlider);
    deleteAndZero (rotarySlider);
    deleteAndZero (toggleButton);
    deleteAndZero (textButton);

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void widgetBox::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void widgetBox::resized()
{
    groupComponent->setBounds (proportionOfWidth (0.0270f), proportionOfHeight (0.1601f), proportionOfWidth (0.9469f), proportionOfHeight (0.8003f));
    comboBox->setBounds (proportionOfWidth (0.6934f), proportionOfHeight (0.0794f), proportionOfWidth (0.2500f), proportionOfHeight (0.0602f));
    horizontalSlider->setBounds (proportionOfWidth (0.1996f), proportionOfHeight (0.3803f), proportionOfWidth (0.2500f), proportionOfHeight (0.0602f));
    rotarySlider->setBounds (proportionOfWidth (0.1996f), proportionOfHeight (0.6402f), proportionOfWidth (0.2500f), proportionOfHeight (0.1396f));
    toggleButton->setBounds (proportionOfWidth (0.5863f), proportionOfHeight (0.3803f), proportionOfWidth (0.2500f), proportionOfHeight (0.0602f));
    textButton->setBounds (proportionOfWidth (0.5863f), proportionOfHeight (0.6799f), proportionOfWidth (0.2266f), proportionOfHeight (0.0602f));
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void widgetBox::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == comboBox)
    {
        //[UserComboBoxCode_comboBox] -- add your combo box handling code here..
		DBG(String( comboBox->getItemText(comboBox->getSelectedItemIndex()) ))
		switch(  comboBox->getSelectedItemIndex()  )
		{
		case 0:
			DBG(T("Default selected"))
			LookAndFeel::setDefaultLookAndFeel (nullptr);
			break;
		case 1:
			DBG(T("Old selected"))
			LookAndFeel::setDefaultLookAndFeel (&oldLookAndFeel);
			break;
		case 2:
			DBG(T("Custom selected"))
			LookAndFeel::setDefaultLookAndFeel (&customLookAndFeel);
			break;
		}
        //[/UserComboBoxCode_comboBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void widgetBox::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == horizontalSlider)
    {
        //[UserSliderCode_horizontalSlider] -- add your slider handling code here..
        //[/UserSliderCode_horizontalSlider]
    }
    else if (sliderThatWasMoved == rotarySlider)
    {
        //[UserSliderCode_rotarySlider] -- add your slider handling code here..
        //[/UserSliderCode_rotarySlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void widgetBox::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == toggleButton)
    {
        //[UserButtonCode_toggleButton] -- add your button handler code here..
        //[/UserButtonCode_toggleButton]
    }
    else if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="widgetBox" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <GROUPCOMPONENT name="new group" id="a93cd27e329518c7" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="2.66% 15.965% 94.681% 79.971%"
                  title="group"/>
  <COMBOBOX name="new combo box" id="e8102fc3b4c29c5f" memberName="comboBox"
            virtualName="" explicitFocusOrder="0" pos="69.326% 7.983% 25% 5.951%"
            editable="0" layout="33" items="Default&#10;Old&#10;Custom" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <SLIDER name="new slider" id="b34302c790286fcc" memberName="horizontalSlider"
          virtualName="" explicitFocusOrder="0" pos="19.947% 38.026% 25% 5.951%"
          min="0" max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="3e6197cc63231f93" memberName="rotarySlider"
          virtualName="" explicitFocusOrder="0" pos="19.947% 64.006% 25% 13.933%"
          min="0" max="10" int="0" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <TOGGLEBUTTON name="new toggle button" id="7a2e4a8d404c98b3" memberName="toggleButton"
                virtualName="" explicitFocusOrder="0" pos="58.599% 38.026% 25% 5.951%"
                buttonText="new toggle button" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <TEXTBUTTON name="new button" id="3e037cf6ef7cb1a" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="58.599% 67.925% 22.695% 5.951%"
              buttonText="new button" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
