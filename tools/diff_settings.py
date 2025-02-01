#!/usr/bin/env python3

def apply(config, args):
    config['baseimg'] = 'baserom.us.z64'
    config['myimg'] = 'build/marioparty3.z64'
    config['mapfile'] = 'build/marioparty3.map'
    config['source_directories'] = ['.']
    config['makeflags'] = ['COMPARE=0']