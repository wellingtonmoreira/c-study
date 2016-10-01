find -name '*.o' | xargs -I {} rm {}
find -name 'main' | xargs -I {} rm {}
