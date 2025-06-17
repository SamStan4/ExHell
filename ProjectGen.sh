#!/usr/bin/env bash

mvn archetype:generate \
        -DarchetypeGroupId=org.openjfx \
        -DarchetypeArtifactId=javafx-archetype-simple \
        -DarchetypeVersion=0.0.6 \
        -DgroupId=io.github.samstan4 \
        -DartifactId=ExHell \
        -Dversion=1.0.0 \
        -Djavafx-version=21.0.7

