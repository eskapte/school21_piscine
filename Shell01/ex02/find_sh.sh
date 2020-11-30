find -d * -name '*.sh' -type f -exec basename {} \; | sed 's/\..*//'
