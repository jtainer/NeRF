// 
// Implementation of Neural Radiance Field (work-in-progress)
//
// 2023, Jonathan Tainer

#include <stdio.h>
#include <raylib.h>

#include "caracalnet/caracalnet.h"
#include "collider/collider.h"

int main() {
	// 5 inputs: Vector3 sample position, Vector2 viewing angle
	const int num_inputs = 5;

	// 4 outputs: RGBA
	const int num_outputs = 4;

	// 4 layers and 256 neurons per layer
	// (someone else did that in a paper and it worked so I am copying it)
	const int num_layers = 4;
	const int neurons_per_layer = 256;

	cn_network net = cn_network_create(num_inputs, num_outputs, num_layers, neurons_per_layer, cn_device);



	cn_network_destroy(&net);

	return 0;
}
