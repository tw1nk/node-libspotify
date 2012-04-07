#include <node.h>
#include <v8.h>

using namespace v8;

/**
*	Display the about text for libspotify.
* @param args the arguments
*/
Handle<Value> About(const Arguments &args) {
	HandleScope scope;
	return scope.Close(String::New("node-libspotify uses SPOTIFY(R) CORE.\n This product uses SPOTIFY(R) CORE but is not endorsed,\n certified or otherwise approved in any way by Spotify.\n Spotify is the registered trade mark of the Spotify Group."));
}

void init(Handle<Object> target) {
	target->Set(String::NewSymbol("about"), 
		FunctionTemplate::New(About)->GetFunction());
}

NODE_MODULE(libspotify, init);