#include "NotesProcessor.h"

AudioProcessor *JUCE_CALLTYPE createPluginFilter() { return new NotesProcessor(); }