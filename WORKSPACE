git_repository(
    name = "libgam",
    remote = "https://github.com/bentglasstube/gam.git",
    tag = "v1.1",
)

git_repository(
    name = "mxebzl",
    remote = "https://github.com/cfrantz/mxebzl.git",
    tag = "20170703_RC03",
)

load("@mxebzl//tools:repository.bzl", "mxe_compilers")
mxe_compilers(
    deps = [
        "compiler",
        "SDL2",
        "SDL2-extras",
        "bzip2",
        "freetype-bootstrap",
        "gettext",
        "glib",
        "harfbuzz",
        "libiconv",
        "pcre",
        "xz",
    ],
)
