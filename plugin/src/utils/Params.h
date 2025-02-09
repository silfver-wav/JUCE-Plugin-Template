#pragma once
#include <juce_audio_processors/juce_audio_processors.h>

namespace ParamIDs {
constexpr auto power = "power";
constexpr auto mix = "mix";
constexpr auto gain = "gain";
} // namespace ParamIDs

namespace ParamRange {
constexpr float mixStart = 0.f;
constexpr float mixEnd = 1.f;
constexpr float mixInterval = 0.01f;
constexpr float mixDefault = 8.f;

constexpr float gainStart = -12.0f;
constexpr float gainEnd = 12.0f;
constexpr float gainInterval = 0.1f;
constexpr float gainDefault = 0.0f;
} // namespace ParamRange

class Params {
public:
  static juce::AudioProcessorValueTreeState::ParameterLayout
  createParameterLayout();
};
