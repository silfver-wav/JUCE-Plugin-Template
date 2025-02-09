#include "PluginEditor.h"
#include "PluginProcessor.h"
#include "utils/Utils.h"

AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor(
    AudioPluginAudioProcessor &p)
    : AudioProcessorEditor(&p),
    processorRef(p)
{
  setResizable(true, true);
  setResizeLimits(450, 450, 2000, 1600);
  // getConstrainer()->setFixedAspectRatio(2.0f);
  setSize(478, 470);
}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor() {}

void AudioPluginAudioProcessorEditor::paint(juce::Graphics &g) {
  g.fillAll(Colours::primaryColour.brighter(0.35f));
}

void AudioPluginAudioProcessorEditor::resized() {
  auto area = getLocalBounds();
}


