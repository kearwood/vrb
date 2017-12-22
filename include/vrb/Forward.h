#ifndef VRB_FORWARD_DOT_H
#define VRB_FORWARD_DOT_H

#include <memory>

namespace vrb {

class Context;
typedef std::shared_ptr<Context> ContextPtr;

class Matrix;

class RenderObject;
typedef std::shared_ptr<RenderObject> RenderObjectPtr;

class RenderObjectState;
typedef std::shared_ptr<RenderObjectState> RenderObjectStatePtr;

class Texture;
typedef std::shared_ptr<Texture> TexturePtr;

class TextureCache;
typedef std::shared_ptr<TextureCache> TextureCachePtr;

class Vector;

} // namespace vrb

#endif // VRB_FORWARD_DOT_H