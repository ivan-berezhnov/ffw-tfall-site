# Require any additional compass plugins here.

# Set this to the root of your project when deployed:
css_dir = "stylesheets"
sass_dir = "sass"
images_dir = "images"
fonts_dir = "fonts"

minify_css = true
# output_style = :expanded or :nested or :compact or :compressed
output_style = :expanded
environment = :development
# environment = :production

relative_assets = true

# To enable relative paths to assets via compass helper functions. Uncomment:
# relative_assets = true

# To disable debugging comments that display the original location of your selectors. Uncomment:


# If you prefer the indented syntax, you might want to regenerate this
# project again passing --syntax sass, or you can uncomment this:
# preferred_syntax = :sass
# and then run:
# sass-convert -R --from scss --to sass sass scss && rm -rf sass && mv scss sass

# Conditionally enable line comments when in development mode.
line_comments = (environment == :production) ? false : true

# Output debugging info in development mode.
sass_options = (environment == :production) ? {} : {:debug_info => true}
sass_options = {:sourcemap => true}
