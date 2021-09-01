# Run emcc via docker https://hub.docker.com/r/emscripten/emsdk
area.html: area.c
	docker run \
  	--rm \
  	-v $$(pwd):/src \
  	-u $$(id -u):$$(id -g) \
  	emscripten/emsdk \
  	emcc area.c -o area.html

server:
	npx http-server .

clean:
	rm -f area.html area.js area.wasm
