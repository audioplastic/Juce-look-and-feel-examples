/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  6 Jun 2011 12:47:33pm

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
    addAndMakeVisible (groupComponent = new GroupComponent (L"new group",
                                                            L"group"));

    addAndMakeVisible (comboBox = new ComboBox (L"new combo box"));
    comboBox->setEditableText (false);
    comboBox->setJustificationType (Justification::centredLeft);
    comboBox->setTextWhenNothingSelected (String::empty);
    comboBox->setTextWhenNoChoicesAvailable (L"(no choices)");
    comboBox->addItem (L"Default", 1);
    comboBox->addItem (L"Old", 2);
    comboBox->addItem (L"Nick1", 3);
    comboBox->addItem (L"Nick2", 4);
    comboBox->addListener (this);

    addAndMakeVisible (horizontalSlider = new Slider (L"new slider"));
    horizontalSlider->setRange (0, 10, 0);
    horizontalSlider->setSliderStyle (Slider::LinearHorizontal);
    horizontalSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    horizontalSlider->addListener (this);

    addAndMakeVisible (rotarySlider = new Slider (L"new slider"));
    rotarySlider->setRange (0, 10, 0);
    rotarySlider->setSliderStyle (Slider::Rotary);
    rotarySlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    rotarySlider->addListener (this);

    addAndMakeVisible (toggleButton = new ToggleButton (L"new toggle button"));
    toggleButton->addListener (this);

    addAndMakeVisible (textButton = new TextButton (L"new button"));
    textButton->addListener (this);


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
    groupComponent->setBounds (proportionOfWidth (0.0267f), proportionOfHeight (0.1600f), proportionOfWidth (0.9467f), proportionOfHeight (0.8000f));
    comboBox->setBounds (proportionOfWidth (0.6933f), proportionOfHeight (0.0800f), proportionOfWidth (0.2500f), proportionOfHeight (0.0600f));
    horizontalSlider->setBounds (proportionOfWidth (0.2000f), proportionOfHeight (0.3800f), proportionOfWidth (0.2500f), proportionOfHeight (0.0600f));
    rotarySlider->setBounds (proportionOfWidth (0.2000f), proportionOfHeight (0.6400f), proportionOfWidth (0.2500f), proportionOfHeight (0.1400f));
    toggleButton->setBounds (proportionOfWidth (0.5867f), proportionOfHeight (0.3800f), proportionOfWidth (0.2500f), proportionOfHeight (0.0600f));
    textButton->setBounds (proportionOfWidth (0.5867f), proportionOfHeight (0.6800f), proportionOfWidth (0.2267f), proportionOfHeight (0.0600f));
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
			DBG(T("Nick1 selected"))
			LookAndFeel::setDefaultLookAndFeel (nullptr);
			break;
		case 3:
			DBG(T("Nick2 selected"))
			LookAndFeel::setDefaultLookAndFeel (nullptr);
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
                  virtualName="" explicitFocusOrder="0" pos="2.698% 16.005% 94.694% 80.026%"
                  title="group"/>
  <COMBOBOX name="new combo box" id="e8102fc3b4c29c5f" memberName="comboBox"
            virtualName="" explicitFocusOrder="0" pos="69.335% 7.939% 25% 6.018%"
            editable="0" layout="33" items="Default&#10;Old&#10;Nick1&#10;Nick2"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="new slider" id="b34302c790286fcc" memberName="horizontalSlider"
          virtualName="" explicitFocusOrder="0" pos="19.964% 38.028% 25% 6.018%"
          min="0" max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="3e6197cc63231f93" memberName="rotarySlider"
          virtualName="" explicitFocusOrder="0" pos="19.964% 64.02% 25% 13.956%"
          min="0" max="10" int="0" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <TOGGLEBUTTON name="new toggle button" id="7a2e4a8d404c98b3" memberName="toggleButton"
                virtualName="" explicitFocusOrder="0" pos="58.633% 38.028% 25% 6.018%"
                buttonText="new toggle button" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <TEXTBUTTON name="new button" id="3e037cf6ef7cb1a" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="58.633% 67.99% 22.662% 6.018%"
              buttonText="new button" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
