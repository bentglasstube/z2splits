package(default_visibility = ["//visibility:public"])

load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")
load("@mxebzl//tools/windows:rules.bzl", "pkg_winzip")

config_setting(
    name = "windows",
    values = {
        "crosstool_top": "@mxebzl//tools/windows:toolchain",
    }
)

cc_binary(
    name = "z2splits",
    data = ["//content"],
    linkopts = select({
        ":windows": [ "-mwindows", "-lSDL2main" ],
        "//conditions:default": [],
    }) + [
        "-lSDL2",
        "-lSDL2_image",
        "-lSDL2_mixer",
    ],
    srcs = ["main.cc"],
    deps = [
        ":splits_screen",
        "@libgam//:game",
    ],
)

cc_library(
    name = "splits_screen",
    srcs = ["splits_screen.cc"],
    hdrs = ["splits_screen.h"],
    deps = [
        "@libgam//:screen",
        "@libgam//:spritemap",
        "@libgam//:text",
    ],
)

pkg_winzip(
    name = "z2splits-windows",
    files = [
        ":z2splits",
        "//content",
    ],
)

pkg_tar(
    name = "z2splits-linux",
    extension = "tgz",
    files = [
        ":z2splits",
        "//content",
    ],
)
