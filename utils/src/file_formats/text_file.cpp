#include "text_file.h"
#include "../resources/resource_data.h"

using namespace Halley;

TextFile::TextFile() {}

TextFile::TextFile(String data)
	: data(data)
{}

std::unique_ptr<TextFile> TextFile::loadResource(ResourceLoader& loader)
{
	return std::make_unique<TextFile>(loader.getStatic()->getString());
}