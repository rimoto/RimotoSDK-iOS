Pod::Spec.new do |s|
  s.name                = "RimotoSDK"
  s.version             = "0.9.1"
  s.summary             = "Rimoto allows apps to sponsor their data-consumption."
  s.homepage            = "http://www.rimoto.com"
  s.license             = {
      :type => 'Commercial',
      :text => <<-LICENSE
                    Copyright (C) 2016 Rimoto
                    Permission is hereby granted to use this framework as is, modifications are not allowed.
                    All rights reserved.

      				THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
      				IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
      				FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
      				AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
      				LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
      				OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
      				THE SOFTWARE.
            LICENSE
  }
  s.author              = { "Rimoto" => "support@rimoto.com" }
  s.platform            = :ios, '8.0'

  s.source              = { :git => 'https://github.com/rimoto/RimotoSDK-iOS.git', :tag => s.version.to_s }

  s.source_files        = 'RimotoSDK.framework/**/*.{h}'
  s.module_map 			    = 'RimotoSDK.framework/Modules/module.modulemap'
  s.preserve_paths      = 'RimotoSDK.framework'
  s.vendored_frameworks = 'RimotoSDK.framework'

  s.pod_target_xcconfig = { 'SWIFT_VERSION' => '2.3' }

  s.frameworks          = 'CoreTelephony', 'RimotoSDK'
  s.requires_arc        = true
end
