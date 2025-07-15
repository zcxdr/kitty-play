#include <iostream>
#include <portaudio.h>

int main(){
	PaError err = Pa_Initialize();
	if(err != paNoError){
		std::cerr << "PortAudio init failed: " << Pa_GetErrorText(err) << "\n";
		return 1;
	}
	std::cout << "Portaudio intialized successfully";
	Pa_Terminate();
	return 0;
}

