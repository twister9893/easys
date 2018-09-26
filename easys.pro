TEMPLATE = subdirs
SUBDIRS += src/core \
           src/app-console

core.subdir         = src/core
app-console.subdir  = src/app-console

app-console.depends = core
