#ifndef VIDEO_FILTER_UTILS_H
#define VIDEO_FILTER_UTILS_H
#include "./../videoeffect/image_effect/contrast_effect.h"
#include "./../videoeffect/image_effect/time_stretch/time_stretch_effect.h"
#include "./../videoeffect/image_effect/ghost_scene/image_4mirror_effect.h"
#include "./../videoeffect/image_effect/ghost_scene/image_2mirror_effect.h"
#include "./../videoeffect/image_effect/ghost_scene/x_ray/image_color_invert_effect.h"
#include "./../videoeffect/image_effect/ghost_scene/tilt_shift/image_tilt_shift_effect.h"
#include "./../videoeffect/image_effect/ghost_scene/blur_mirror/image_blur_mirror_effect.h"
#include "./../videoeffect/image_effect/ghost_scene/soul_stuff/image_soul_stuff_effect.h"
#include "./../videoeffect/image_effect/ghost_scene/carousel/image_carousel_effect.h"
#include "./../videoeffect/image_effect/player_contrast_effect.h"
#include "./../videoeffect/image_effect/grayscale_effect.h"
#include "./../videoeffect/image_effect/mix_effect.h"
#include "./../videoeffect/image_effect/sepia_effect.h"
#include "./../videoeffect/image_effect/tone_curve_effect.h"
#include "./../videoeffect/image_effect/vignette_effect.h"
#include "./../videoeffect/image_effect/whitening/whitening_effect.h"
#include "./../videoeffect/image_effect/whitening/whitening_cool_effect.h"
#include "./../videoeffect/image_effect/beautify_face/beautify_face_effect.h"
#include "./../videoeffect/image_effect/beautify_face/thin_beautify_face_effect.h"
#include "./../videoeffect/image_effect/beautify_face/beautify_face_cool_effect.h"
#include "./../videoeffect/image_effect/thin/thin_whitening_effect.h"
#include "./../videoeffect/header_screen_scene/header_screen_scene_effect.h"
#include "./../videoeffect/saturation_scene/saturation_effect.h"
#include "./../videoeffect/png_sequence/png_sequence_effect.h"
#include "./../videoeffect/gif_scene/gif_scene_effect.h"
#include "./../videoeffect/text_scene/text_scene_effect.h"
#include "./../videoeffect/screen_scene/screen_scene_effect.h"
#include "./../videoeffect/transition_scene/transition_scene_effect.h"
#include "./../videoeffect/header_fade_scene/header_fade_scene_effect.h"
#include "./../videoeffect/trailer_scene/trailer_scene_effect.h"
#include "./../videoeffect/blur_scene/blur_scene_effect.h"
#include "./../videoeffect/blur_scene/selective_blur_scene_effect.h"
#include "./../videoeffect/overlay_scene/overlay_scene_effect.h"
#include "./../videoeffect/video_overlay_scene/video_overlay_scene_effect.h"
#include "./../videoeffect/base_video_effect.h"
#include "./../videoeffect/mask_alpha/mask_alpha_effect.h"
#include "./../editmodel/mask_alpha/model_mask_alpha_filter.h"
#include "./../editmodel/video_decoder_scene/model_decoder_filter.h"
#include "./../editmodel/text_scene/text_scene_filter.h"
#include "./../editmodel/overlay_scene/overlay_scene_filter.h"
#include "./../editmodel/video_overlay_scene/video_overlay_scene_filter.h"
#include "./../editmodel/transition_scene/transition_scene_filter.h"
#include "./../editmodel/trailer_scene/trailer_scene_filter.h"
#include "./../editmodel/blur_scene/blur_scene_filter.h"
#include "./../editmodel/header_screen_scene/header_screen_scene_filter.h"
#include "./../editmodel/selective_blur_scene/selective_blur_scene_filter.h"
#include "./../editmodel/png_sequence/png_sequence_filter.h"
#include "./../editmodel/header_fade_scene/header_fade_scene_filter.h"

BaseVideoEffect * createVideoEffect(const char * filterName);

ModelFilter * createModelFilter(int filterIndex, int64_t sequenceIn, int64_t sequenceOut, char* filterName);


#endif // VIDEO_FILTER_UTILS_H
