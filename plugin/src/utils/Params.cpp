#include "Params.h"
#include <juce_audio_processors/juce_audio_processors.h>

juce::AudioProcessorValueTreeState::ParameterLayout
Params::createParameterLayout() {
  using namespace juce;

  std::vector<std::unique_ptr<RangedAudioParameter>> params;

  params.push_back(std::make_unique<AudioParameterFloat>(
      ParamIDs::mix, "Mix",
      NormalisableRange(ParamRange::mixStart, ParamRange::mixEnd,
                        ParamRange::mixInterval),
      ParamRange::mixDefault, String(),
      AudioProcessorParameter::genericParameter,
      [](float value, float) { return String(static_cast<int>(value * 100)) + " %"; }));

  params.push_back(std::make_unique<AudioParameterFloat>(
      ParamIDs::gain, "Gain",
      NormalisableRange(ParamRange::gainStart, ParamRange::gainEnd,
                        ParamRange::gainInterval),
      ParamRange::gainDefault, String(),
      AudioProcessorParameter::genericParameter,
      [](float value, float) { return String(value, 1) + " dB "; }));

  params.push_back(
      std::make_unique<AudioParameterBool>(ParamIDs::power, "Power", true));

  return {params.begin(), params.end()};
}
